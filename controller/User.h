#ifndef CPAP_USER_H
#define CPAP_USER_H


#include "../crow_all.h"
#include "../model/User.h"

using namespace Cpap;
using namespace crow;

namespace Cpap {
    namespace Controller {
        class UserController {
        public:
            static int Get() {


                json::wvalue x;
                Model::User result;
                result = Model::User::Get();

                myObjectStream << result;
                std::string mySerializedObject = myObjectStream.str();

                x["message"] = mySerializedObject;
                return x;
            }
        };
    }
}


#endif //CPAP_USER_H
