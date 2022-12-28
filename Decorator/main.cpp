#include <iostream>
#include "nennouryokusha.h"
#include "kurapika.h"
#include "chain.h"

int main(){
    nennnouryokusha *kurapika1;
    nennnouryokusha *kurapika2;

    /* スチールチェーン→ジャッジメントチェーン→チェーンジェイル */
    kurapika1 = new steal_chain(new judgement_chain(new chain_jail(new kurapika)));
    kurapika1->nennnouryoku();

    std::cout << "\r\n\r\n---test---\r\n\r\n";

    /* チェーンジェイル→スチールチェーン→ジャッジメントチェーン */
    kurapika2 = new chain_jail(new steal_chain(new judgement_chain(new kurapika)));
    kurapika2->nennnouryoku();
}