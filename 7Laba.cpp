
#include <math.h> 
#include <iostream>
#include <string>
#include <stdio.h>
#include <queue> // подключаем заголовочный файл очереди
#include <stack>
#include <forward_list>

using namespace std;

void task1() {
    
    queue <double> q;  // создали очередь q
    int n,a,line3,perimetr;
    int first_num,second_num;
    cout << "Количество элементов: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        q.push(a);
    }
    first_num = q.front();
    q.pop();
    second_num = q.front();
    q.push(first_num);
    cout << "Выводим очередь на экран: "<<endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    line3 = sqrt((first_num * first_num) + (second_num * second_num));
    cout << "Данные о треугольнике: " << endl;
    cout << "Первый катет: " << first_num<<endl;
    cout << "Второй катет: " << second_num<<endl;
    cout << "Гипотенуза: " << line3 << endl;
    perimetr = line3 + first_num + second_num;
    cout << "Периметр трегольника: " << perimetr;
}

void task2() {
    forward_list <string>st;
    cout << "Стек до удаления одного элемента"<<endl;
    st.push_front("Students");
    st.push_front("of");
    st.push_front("the");
    st.push_front("group");
    st.push_front("TE");
    while (!st.empty()) {
        cout << st.front() << endl;
        st.pop_front();
    }
    cout << "Стек после удаления одного элемента" << endl;
    st.push_front("Students");
    st.push_front("of");
    st.push_front("the");
    st.push_front("group");
    st.push_front("TE");
    while (!st.empty()) {
        cout << st.front() << endl;
        st.pop_front();
    }
    st.push_front("Students");
    st.push_front("of");
    st.push_front("the");
    st.push_front("group");
    st.push_front("TE");
    cout << "Слова на букву t: " << endl;
    for (const string& word : st)
        if (word[0] == 't')
            cout << word << endl;
}
void task3() {

}
int main() {
    setlocale(LC_ALL, "rus");
    task1();
    task2();
}
