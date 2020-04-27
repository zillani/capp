#ifndef CPAP_USER_H
#define CPAP_USER_H


#include "../lib/crow_all.h"
#include "../model/user.h"

using namespace crow;

namespace cpap {
    namespace controller {
        class UserController {
        public:
            static json::wvalue Get() {

                json::wvalue x;
/*                Model::user result;
                result = Model::user::Get();*/

                x["message"] = "Hello";
                return x;
            }
        };
    }
}


#endif //CPAP_USER_H
