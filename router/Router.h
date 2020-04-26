#ifndef CPAP_ROUTER_H
#define CPAP_ROUTER_H

#include "../lib/crow_all.h"

namespace Cpap {
    class Router {
    public:
        static int serve() {
            crow::SimpleApp app;

            CROW_ROUTE(app, "/")([]() {
                return "Hello world";
            });

            app.port(8888).multithreaded().run();
            return 0;
        }
    };
}
#endif //CPAP_ROUTER_H
