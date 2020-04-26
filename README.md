# Cpap

## Add executable
[add executable](https://github.com/corochann/SingleFileExecutionPlugin)

__Execute__
```bash
g++ main.cpp -o main -Wall -I/usr/include/cppconn -L/usr/lib -lmysqlcppconn
```

## C++ Project structure
[project-structure](https://medium.com/heuristics/c-application-development-part-1-project-structure-454b00f9eddc)

## Add dependency
add to cmakelist.txt file,
```bash
include_directories("/usr/lib/redis/include")
```

## Crow

```bash
sudo apt-get clean && sudo apt-get update
sudo apt-get install libboost-all-dev
openssl version -a
sudo apt install build-essential checkinstall zlib1g-dev -y
cd cd /usr/local/src/
cd /usr/local/src/
sudo wget https://www.openssl.org/source/openssl-1.1.1c.tar.gz
sudo tar -xf openssl-1.1.1c.tar.gz
cd openssl-1.1.1c
sudo ./config --prefix=/usr/local/ssl --openssldir=/usr/local/ssl shared zlib
sudo make
sudo make install
```

## understanding cmake

## build crow
```bash
g++ main.cpp -o main -lpthread -lboost_system -Wall -I/usr/include/cppconn -L/usr/lib -lmysqlcppconn
```
