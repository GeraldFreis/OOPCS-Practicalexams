#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <iostream>
#include <stack>
using std::cout; using std::string; using std::cin; using std::stack;

class USBConnection {
    private:
        USBConnection(int id);
        int id;
        static stack<int> ids;

    public:
        static USBConnection* CreateUsbConnection();
        int get_id();
        ~USBConnection();
};

USBConnection* USBConnection::CreateUsbConnection(){
    if(ids.empty() == true){
        return nullptr;
    }
    else {
        USBConnection * newcon = new USBConnection(ids.top());
        ids.pop();
        return newcon;
    }
}

int USBConnection::get_id(){
    return id;
}

USBConnection::~USBConnection(){
    ids.push(id);

}

#endif