

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "../lib/crow_all.h"
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>

using namespace std;
using namespace sql;

namespace Cpap {
    namespace Model {

        sql::Driver *driver;
        sql::Connection *con;
        sql::Statement *stmt;
        sql::ResultSet *rs;

        class User {
            int Id;
            string Username;
            string Firstname;
            string Lastname;
            string mobile;
            int orders;
            string Password;
            int UserRole;
            int IsActive;
        public:
            int getId() const {
                return Id;
            }

            void setId(int id) {
                Id = id;
            }

            const string &getUsername() const {
                return Username;
            }

            void setUsername(const string &username) {
                Username = username;
            }

            const string &getFirstname() const {
                return Firstname;
            }

            void setFirstname(const string &firstname) {
                Firstname = firstname;
            }

            const string &getLastname() const {
                return Lastname;
            }

            void setLastname(const string &lastname) {
                Lastname = lastname;
            }

            const string &getMobile() const {
                return mobile;
            }

            void setMobile(const string &mobile) {
                User::mobile = mobile;
            }

            int getOrders() const {
                return orders;
            }

            void setOrders(int orders) {
                User::orders = orders;
            }

            const string &getPassword() const {
                return Password;
            }

            void setPassword(const string &password) {
                Password = password;
            }

            int getUserRole() const {
                return UserRole;
            }

            void setUserRole(int userRole) {
                UserRole = userRole;
            }

            int getIsActive() const {
                return IsActive;
            }

            void setIsActive(int isActive) {
                IsActive = isActive;
            }

        public:
            static User user;
            static User Get() {
                try {
                    Cpap::Dao::Sql::connect();

                    con->setSchema("cpap");
                    stmt = con->createStatement();
                    rs = stmt->executeQuery("SELECT * FROM user");

                    cout << "list of data:" << endl;

                    while (rs->next()) {
                        user.setId(rs->getInt(1));
                        user.setFirstname(rs->getString(2));
                        user.setLastname(rs->getString(3));
                        cout << "id: " << rs->getInt(1) << endl;
                        cout << "name: " << rs->getString(2) << endl;
                        cout << "price: " << rs->getDouble(3) << endl;
                        cout << "created: " << rs->getString(4) << endl;

                    }

                    delete rs;
                    delete stmt;

                } catch (sql::SQLException &e) {
                    cout << "# ERR: " << e.what();
                    cout << " (MySQL error code: " << e.getErrorCode();
                    cout << ", SQLState: " << e.getSQLState() << " )" << endl;
                }

                cout << endl;

                Cpap::Dao::Sql::close();
                return user;
            };
        };
    }
}

