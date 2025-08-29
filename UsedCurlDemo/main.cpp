#include <iostream>
#include "curl/curl.h"
#pragma comment (lib,"libcurl.lib")

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

    std::cout << "·µ»Ø×´Ì¬: " << res << std::endl;

    system("pause");
    return 0;
}
