#include <iostream>                  // 不需要使用 #define CURL_STATICLIB 宏
#include "curl/curl.h"               // 也不需要 #pragma comment (lib,"libcurl.lib")，会自动链接
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