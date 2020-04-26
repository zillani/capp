//
// Created by root on 4/26/20.
//

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

            app.port(8080).multithreaded().run();
        }
    };
}
#endif //CPAP_ROUTER_H
