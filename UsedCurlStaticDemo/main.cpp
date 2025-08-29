#define CURL_STATICLIB         // ����Ҫ��ʾʹ�þ�̬��ĺ�
#define BUILDING_LIBCURL
#include <iostream>
#include "curl/curl.h"

// ��ӱ�Ҫ�Ŀ�����
#pragma comment (lib,"libcurl_a.lib")
#pragma comment (lib,"wldap32.lib")
#pragma comment (lib,"ws2_32.lib")
#pragma comment (lib,"Crypt32.lib")
#pragma comment(lib, "normaliz.lib")   // ����Խ�� IdnToAscii/IdnToUnicode ����
#pragma comment(lib, "secur32.lib")    // ����Խ�� InitSecurityInterfaceA ����

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

    std::cout << "����״̬: " << res << std::endl;

    system("pause");
    return 0;
}
