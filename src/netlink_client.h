
#ifndef __NETLINK_HEADER__
#define __NETLINK_HEADER__

#define NET_LINK_PROTOCOL 20 // 自定义的NET_LINK协议号
#define NET_LINK_CONNECT 0x10  // 自定义的NET_LINK客户端发送连接请求时type
#define NET_LINK_DISCONNECT 0x11   // 自定义的NET_LINK客户端发送断开连接请求时type
#define NETLINK_TEST_COMMAND 0x12  // 自定义的netlink客户端发送的指令
#define NETLINK_TEST_REPLY  0x13   // 自定义的netlink内核回复的消息类型

#define MAXMSG 100000

struct packet_info{
    // 可更改的消息结构体，表示内核与用户态通信的内容，暂定为字符串内容
    //int size;
    char data[MAXMSG];
};

#endif