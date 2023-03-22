#include <stdio.h>

/*Репозиторий к задаче*/
/*https://github.com/s-getmanov/tp_homework_23.git*/

main()
{
    long long int login, password;

    printf("Введите логин:");
    scanf("%lli", &login);

    printf("Введите пароль:");
    scanf("%lli", &password);

    if ( 
           ( login == 22222 && password == 33333 )   
        || ( login == 123 && password == 123 )         
        || ( login == 111 && password == 333 )         
        || ( login == 987654321 && password == 22032023 )
       )
    {
        printf("Вы годный пользователь! Welcome!");
    } else {
        printf("Ошибка авторизации! Good by!");
    };
   
}
