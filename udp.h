#ifndef udp_h
#define udp_h

#define BROADCASTADDR "255.255.255.255"
#define SERVPORT "4774" // the port on which the packets are broadcast on

// set up a socket and configure it to broadcast data over UDP
void set_up_socket();

/* broadcast an array of floats over the network as strings
*  e.g. "31.4,15.9,26.5"
* returns the number of bytes sent 
* If sockfd is 0, then it will call the set_up_socket() function*/
int udp_send(float * data, unsigned char length);
#endif