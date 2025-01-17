#ifndef ANGRY_ROUTE_HPP
#define ANGRY_ROUTE_HPP

#include "crow.h"
#include "../middleware/logging.hpp"

void setup_angry_route(crow::App<LoggingMiddleWare> &app) {
    CROW_ROUTE(app, "/angry/<string>")
    ([](const std::string& name) {
        crow::json::wvalue x;
        x["message"] = "Hello Angry " + name;
        x["status"] = true;
    return x;  // Crow will automatically convert this into a JSON response
    });
}


#endif