#include <drogon/drogon.h>
using namespace drogon;

int main() {
    app().setDocumentRoot("../views").addListener("0.0.0.0", 8080);

    app().run();
    return 0;
}