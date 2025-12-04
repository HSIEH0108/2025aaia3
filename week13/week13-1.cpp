///week13-1.cpp 聖誕倒數寫程式Advent of Code 2025 第1天第1題
///Moodle 點擊 adventofcode.com 網址可看到黑底、白字的題目
///在LeetCode 的 My Playground 我的遊戲場,可以寫程式
///LeetCode 幫你把 #include 全部都加好了,你不用寫#include
///右下角 stdin 可貼上你的程式Input
///在 AdentofCode.com 登入你的GitHub 帳號後,便可看到你的專屬謎題Input
///貼到右下角 stdin後,再執行,看你的答案是多少(每個人都不一樣)

int main() {
    char c;///子母，對應方向L左轉，R右轉
    int d;///數字，要轉動幾格
    int now = 50; ///一開始的密碼鎖指向50
    int ans = 0; ///轉動時，有幾次停在0的地方
    while(cin >> c >> d){ ///一直讀資料
        /// if(c=='L')cout <<"往左轉"<< d << "格\n";
        /// if(c=='R')cout <<"往右轉"<< d << "格\n";
        if(c=='L')now = now - d; ///減掉
        if(c=='R')now = now + d; ///加上

        now = (now%100 + 100) % 100; ///太大的太小的都限制在0~99間
        ///cout << "現在的刻度是:" << now << "\n";
        if(now==0)ans++;
    }
    cout <<"答案是:" << ans;
   ///std::cout << "Hello World!\n";
}
