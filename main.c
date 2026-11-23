#include <stdio.h>
#include <string.h>

struct student {
    int id;       
    char name[20];   
    float grade;     
};

int main(void) {
    struct student s = {111111, "Hong", 3.0f};
    s.id= 123456;
    strcpy(s.name, "Juyeop");   
    s.grade = 4.2f;

    printf("ID : %d\n", s.id);
    printf("name : %s\n", s.name);
    printf("grade : %f\n", s.grade);

    return 0;
}