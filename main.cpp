#include "studentStatus.h"
//4. main.cpp: 테스트 (추가)
// 1의 본인이름학번의 네임스페이스 안에 비멤버함수 compare클래스1 정의: 매개변수는 const 클래스1 참조형 2개, 매개변수 멤버들이 모두 같은지를 비교

namespace ywchoi2649052
{
    bool compareStudent(const student& s1, const student& s2)
    {
        return s1.getId() == s2.getId()
        && s1.getScore() == s2.getScore()
        && s1.getGrade() == s2.getGrade();
    }

}

int main()
{
// 클래스2 객체1 선언, print함수 호출
// 클래스2 객체2 초기값을 넣어서 선언, print함수 호출
// 비멤버함수 compare클래스1을 호출하여 그 리턴값이 true면 same, false면 not same을 표준스트림으로 출력    
    using namespace ywchoi2649052;
    studentStatus s1;
    s1.print();

    studentStatus s2{student{2649052, 100, 'A'}, true};
    s2.print();

    if (compareStudent(s1.getStudent(), s2.getStudent())) std::cout << "same\n";
    else std::cout << "not same\n";

    return 0;
}