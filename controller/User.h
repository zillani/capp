#ifndef CPAP_USER_H
#define CPAP_USER_H


#include "../lib/crow_all.h"
#include "../model/User.h"

using namespace Cpap;
using namespace crow;

namespace Cpap {
    namespace Controller {
        class UserController {
        public:
            static json::wvalue Get() {

                json::wvalue x;
/*                Model::User result;
                result = Model::User::Get();*/

                x["message"] = "Hello";
                return x;
            }
        };
    }
}


#endif //CPAP_USER_H
