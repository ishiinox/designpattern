#include <iostream>
#include "karate.h"
#include "karateImp.h"
#include "Kungfu.h"
#include "orochi.h"
#include "retsu.h"

int main(){
    KarateImp* karateimp_orochi = new Orochi;
    KarateImp* karateimp_retsu = new Retsu;

    /* 空手の実装は愚地勝巳 */
    Karate* karate = new Karate(karateimp_orochi);

    karate->kick();
    karate->punch();

    /* 空手を進化させた中国拳法を定義、実装は烈海王 */
    Kungfu* chinese_kungfu = new Kungfu(karateimp_retsu);

    /* 空手を進化させた中国拳法を定義、実装は愚地克巳（愚地克巳の実装部は変えてない） */
    Kungfu* japanese_kungfu = new Kungfu(karateimp_orochi);

    /* 中国拳法は空手でもできるキック、パンチを継承しているし、追加で消力（シャオリー）が使える */
    chinese_kungfu->kick();
    chinese_kungfu->punch();
    chinese_kungfu->shaori();

    /* 愚地克巳が烈海王に教えを乞い、空手を進化させる */
    japanese_kungfu->kick();
    japanese_kungfu->punch();
    japanese_kungfu->shaori();
    
    delete karateimp_orochi;
    delete karateimp_retsu;
    delete karate;
    delete japanese_kungfu;
    delete chinese_kungfu;
};