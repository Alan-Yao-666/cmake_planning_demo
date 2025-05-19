#include<iostream>
#include"pnc_map.h"
using std::cout,std::endl;

void mapTest()
{
    cout <<"this is map_test"<<endl;
    PNC_Map Mymap;//调用pnc_map.cpp中的函数
    Mymap.mapInfo();
}

int main()
{
    mapTest();
    return 0;
}
