#include <unistd.h>
#include "server/webserver.h"

int main(){
    // 后台跑守护进程
    // daemon(1, 0); 

    WebServer server(
        8081, 3,           // 端口 ET模式
        12, 6              // 连接池数量 线程池数量 
        );

    server._Start();

    return 0;
}
