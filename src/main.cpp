#include <iostream>
#include <libcomm/Socket.h>

int main() {
    Socket* socket = new Socket();
    socket->repr();
    delete socket;

    return 0;
}