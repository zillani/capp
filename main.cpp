#include "dao/Sql.h"
#include "router/Router.h"

using namespace Cpap;

int main() {
    Dao::Sql::connect();
    Router::serve();
    return 0;
}