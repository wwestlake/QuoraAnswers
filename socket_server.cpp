

// simple server, single connection

#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h> 
#define PORT 8080 


int main(int ac, char ** av)
{
    /// setup some data
    int fd, sock, val; 
    struct sockaddr_in address; 
    int opt = 1; 
    int addrlen = sizeof(address); 
    char buffer[1024] = {0}; 
    const char *hello = "Hello Socket World!\n"; 


    // Creating socket file descriptor 
    if ((fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) 
    { 
        perror("unable to open socket, check permissions on host"); 
        exit(EXIT_FAILURE); 
    } 
       
    // Forcefully attaching socket to the port 8080 
    if (setsockopt(fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) 
    { 
        perror("Error setting socket options"); 
        exit(EXIT_FAILURE); 
    } 

    // setup the protocol and listening address
    address.sin_family = AF_INET; 
    address.sin_addr.s_addr = INADDR_ANY; 
    address.sin_port = htons( PORT ); 


    // Bind to port 8080, this creates a path from the OS protocol stack to the program (a callback) 
    if (bind(fd, (struct sockaddr *)&address, sizeof(address))<0) 
    { 
        perror("Unable to bind to port 8080"); 
        exit(EXIT_FAILURE); 
    } 
    if (listen(fd, 3) < 0) 
    { 
        perror("Unable to listen on port 8080"); 
        exit(EXIT_FAILURE); 
    } 

    // listen on socket
    if ((sock = accept(fd, (struct sockaddr *)&address, (socklen_t*)&addrlen))<0) 
    { 
        perror("Error on conenction or listening"); 
        exit(EXIT_FAILURE); 
    } 
    val = read( sock, buffer, 1024); 
    printf("%s\n",buffer ); 
    send(sock, hello , strlen(hello) , 0 ); 
    printf("Sent Message\n"); 

    return 0;
}
