#include "dao/sql.h"
#include "router/router.h"

using namespace cpap;

int main() {
    dao::Sql::connect();
    cpap::Router::serve();
    return 0;
}
