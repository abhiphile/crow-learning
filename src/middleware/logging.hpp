#ifndef LOGGING_MIDDLEWARE
#define LOGGING_MIDDLEWARE

# include "crow.h"
# include <iostream>

class LoggingMiddleWare{
public:
    struct context {};

    void before_handle(crow::request &req, crow::response &res, context &ctx){
        std::cout<<"REQUEST URL: " + req.url <<std::endl; 
    }

    void after_handle(crow::request &req, crow::response &res, context &ctx){
        std::cout<<"RESPONSE STATUS: " + std::to_string(res.code) <<std::endl; 
    }

};

#endif