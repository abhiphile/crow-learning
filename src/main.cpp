#include "crow.h"
#include "routes/angry.hpp"
#include "middleware/logging.hpp"

int main() {
    crow::App<LoggingMiddleWare> app;

    // Define a route
    CROW_ROUTE(app, "/")([](){
        return "Hello, Crow!";
    });

    // JSON route
    CROW_ROUTE(app, "/json")(
        [](){
            crow::json::wvalue x;
            x["message"] = "Hello World";
            x["success"] = true;
            return x;

        }
    );
    setup_angry_route(app);

    // Start the server on port 8080
    app.port(8080).multithreaded().run();
    return 0;
}

