#include <string>

#define BUF_SIZE 128
#define HEADER_LENGTH 32
#define FOOTER_LENGTH 16
#define M_ADMIN 0x01
#define M_USER 0x02
#define M_EVENT 0x04
#define M_ALERT 0x08

// Think about the size of each data type
struct Message {
    std::string send;
    std::string recv;
    char buf[BUF_SIZE];
    int flag;
};

struct Payload {
    char header[HEADER_LENGTH];
    Message m;
    char footer[FOOTER_LENGTH];
};