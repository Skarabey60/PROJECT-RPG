#include <iostream>
#include <ctime>
using namespace std;

int sum;
int lower_min;

//Генерирование статов (начало)
void stats_generator (){
int stat_generator[4] = {};
for (int i = 0; i < 4; i++) {
    stat_generator[i] = 1 + rand() % 6;
    cout << "Dice randomed for " << stat_generator[i] << endl;
}
    int min = stat_generator[0];
for (int i = 0; i < 4; i++){
      if (stat_generator[i] < min)
      min = stat_generator[i];
      lower_min = min;
  }
 cout << " Worst number is " << min << endl; // наименьшее число

    // int sum = 0;
for (int i = 0; i < 4; i++){
      sum = sum + stat_generator[i];
     }
cout << " Sum of the other elements is " << sum - min << endl;
cout << "-----------------------------------------" << endl;
}
// Генерирование статов (окончание)

int main(int argc, char *argv[]){
    int race;
    srand(time(NULL));

int str, dex, vit, attack_damage, armor_class, hp;      //инициация статов
int *ptrsum = &sum;     //указатель на переменную sum из функции stats_generator
int *ptrlower_min = &lower_min;     //указатель на переменную lower_min(от переменной min) из функции stats_generator

stats_generator();      //рандом для str
str = *ptrsum - *ptrlower_min;    //вычитание из 4ех дайсов 1го самого малого
*ptrsum = 0;    //обнуление суммы из функции stats_generator
*ptrlower_min = 0;  //обнуление минимального числа из функции stats_generator

stats_generator();      // рандом для dex
dex = *ptrsum - *ptrlower_min;       //вычитание из 4ех дайсов 1го самого малого
*ptrsum = 0;    //обнуление суммы из функции stats_generator
*ptrlower_min = 0;  //обнуление минимального числа из функции stats_generator

stats_generator();      // рандом для vit
vit = *ptrsum - *ptrlower_min;    //вычитание из 4ех дайсов 1го самого малого
*ptrsum = 0;    //обнуление суммы из функции stats_generator
*ptrlower_min = 0;  //обнуление минимального числа из функции stats_generator

cout << "Choose your race" << endl;
cout << "\nHuman ( +2 str +2 dex +1 vit )" << "\nElf   ( +0 str +4 dex +1 vit )" << "\nDwarf ( +3 str +0 dex +3 vit )" << endl;
cout << "Human - 1   " << "Elf - 2   " << "Dwarft - 3" << endl;
cin >> race;
cout << "-----------------------------------------" << endl;
cout << "Your character stats" << endl;
switch(race) {
case 1:
    attack_damage = 1 + rand() % 5;
    attack_damage = attack_damage + str/4;
    armor_class = 0 + rand() % 9;
    armor_class = armor_class + dex/4;
    hp = 30 + rand() % 55;
    hp = hp + vit/4;
    cout << "Race: Human" << endl;
    cout << "STR = " << str + 2 << "    Attack Damage - " << attack_damage << endl;
    cout << "DEX = " << dex + 2 << "    Armor Class - "<< armor_class << endl;
    cout << "VIT = " << vit + 1 << "    HP - "<< hp << "/" << hp << endl;
    cout << "-----------------------------------------" << endl;
    break;
case 2:
    attack_damage = 2 + rand() % 6;
    attack_damage = attack_damage + str/4;
    armor_class = 3 + rand() % 7;
    armor_class = armor_class + dex/4;
    hp = 25 + rand() % 40;
    hp = hp + vit/4;
    cout << "Race: Elf" << endl;
    cout << "STR = " << str << "    Attack Damage - " << attack_damage << endl;
    cout << "DEX = " << dex + 4 << "    Armor Class - "<< armor_class << endl;
    cout << "VIT = " << vit + 1 << "    HP - "<< hp << "/" << hp << endl;
    cout << "-----------------------------------------" << endl;
    break;
case 3:
    attack_damage = 5 + rand() % 8;
    attack_damage = attack_damage + str/4;
    armor_class = 6 + rand() % 10;
    armor_class = armor_class + dex/4;
    hp = 55 + rand() % 80;
    hp = hp + vit/4;
    cout << "Race: Dwarf" << endl;
    cout << "STR = " << str + 3 << "    Attack Damage - " << attack_damage << endl;
    cout << "DEX = " << dex << "    Armor Class - "<< armor_class << endl;
    cout << "VIT = " << vit + 3 << "    HP - "<< hp << "/" << hp << endl;
    cout << "-----------------------------------------" << endl;
    break;
default:
    cout << "---------------------------------------------------------------------------" << endl;
    cout << "Error " << " Error " << " Error " << " Error " << " Error " << " Error " << endl;
    cout << "---------------------------------------------------------------------------" << endl;
}

//GOVNOCODE EDITION.

cin.get();
return 0;
}


