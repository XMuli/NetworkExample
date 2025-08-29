#define CURL_STATICLIB         // 是需要表示使用静态库的宏
#define BUILDING_LIBCURL
#include <iostream>
#include "curl/curl.h"

// 添加必要的库依赖
#pragma comment (lib,"libcurl_a.lib")
#pragma comment (lib,"wldap32.lib")
#pragma comment (lib,"ws2_32.lib")
#pragma comment (lib,"Crypt32.lib")
#pragma comment(lib, "normaliz.lib")   // 添加以解决 IdnToAscii/IdnToUnicode 错误
#pragma comment(lib, "secur32.lib")    // 添加以解决 InitSecurityInterfaceA 错误

using namespace std;

int main(int argc, char* argv[])
{
    CURL* curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.baidu.com");
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }

    std::cout << "返回状态: " << res << std::endl;

    system("pause");
    return 0;
}
