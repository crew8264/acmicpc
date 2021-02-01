using namespace std;
#include <iostream>

int main() {
    
    int mon, day;
    scanf("%d %d", &mon, &day);
    char *date[8] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    int month[13] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for(int i = 1; i < mon; i++) {
        day += month[i-1];
    }
    
    printf("%s\n", date[day%7]);
    
    return 0;
}
