#include <stdio.h>
#include <stdlib.h>

int main()
{
    int woods, movie_type, movie, tickets, members, seat, food, food_qty, time_slot;
    float seat_price = 0, extra_seat_price = 0, total_ticket_price, sub_total, food_price = 0, cgst, sgst, net_amount;
    float ticketPrice = 0;
    char name[50];

    printf("\n**************************************");
    printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
    printf("**************************************\n");
    printf("\nEnter Your Name: ");
    scanf("%49s", name);

    system("cls");
    printf("\n**************************************");
    printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
    printf("**************************************\n");
    printf("\nSelect Wood\n");
    printf("1. Hollywood\n");
    printf("2. Bollywood\n");
    printf("3. Tollywood\n");
    printf("4. Kollywood\n");
    printf("5. Mollywood\n");
    printf("6. Sandalwood\n");
    printf("Enter Your Choice: ");
    scanf("%d", &woods);

    switch (woods)
    {
    case 1:
        system("cls");
        printf("\n**************************************");
        printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
        printf("**************************************\n");
        printf("\nHollywood Movie Types\n");
        printf("1. Action Movies\n");
        printf("2. Horror Movies\n");
        printf("3. Comedy Movies\n");
        printf("4. Science Fiction Movies\n");
        printf("5. Romantic Movies\n");
        printf("6. Thriller Movies\n");
        printf("7. Animation Movies\n");
        printf("8. Fantasy Movies\n");
        printf("9. Adventure Movies\n");
        printf("Enter Your Choice: ");
        scanf("%d", &movie_type);

        switch (movie_type)
        {
        case 1:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nHOLLYWOOD ACTION MOVIES\n");
            printf("1. Avengers: Endgame\n");
            printf("2. Mad Max: Fury Road\n");
            printf("3. John Wick\n");
            printf("4. Die Hard\n");
            printf("5. The Dark Knight\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 250;
                break;
            case 2:
                seat_price = 220;
                break;
            case 3:
                seat_price = 200;
                break;
            case 4:
                seat_price = 180;
                break;
            case 5:
                seat_price = 240;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 2:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nHOLLYWOOD HORROR MOVIES\n");
            printf("1. The Conjuring\n");
            printf("2. IT\n");
            printf("3. A Quiet Place\n");
            printf("4. Insidious\n");
            printf("5. Annabelle\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 210;
                break;
            case 3:
                seat_price = 220;
                break;
            case 4:
                seat_price = 190;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 3:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nHOLLYWOOD COMEDY MOVIES\n");
            printf("1. The Hangover\n");
            printf("2. Home Alone\n");
            printf("3. Dumb and Dumber\n");
            printf("4. Superbad\n");
            printf("5. Step Brothers\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 180;
                break;
            case 2:
                seat_price = 250;
                break;
            case 3:
                seat_price = 260;
                break;
            case 4:
                seat_price = 170;
                break;
            case 5:
                seat_price = 270;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 4:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nHOLLYWOOD SCIENCE FICTION MOVIES\n");
            printf("1. Interstellar\n");
            printf("2. Inception\n");
            printf("3. The Matrix\n");
            printf("4. Avatar\n");
            printf("5. Gravity\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 250;
                break;
            case 2:
                seat_price = 230;
                break;
            case 3:
                seat_price = 210;
                break;
            case 4:
                seat_price = 260;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 5:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nHOLLYWOOD ROMANTIC MOVIES\n");
            printf("1. Titanic\n");
            printf("2. The Notebook\n");
            printf("3. La La Land\n");
            printf("4. Pretty Woman\n");
            printf("5. A Walk to Remember\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 280;
                break;
            case 3:
                seat_price = 200;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 230;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 6:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nHOLLYWOOD THRILLER MOVIES\n");
            printf("1. Se7en\n");
            printf("2. Gone Girl\n");
            printf("3. Shutter Island\n");
            printf("4. Prisoners\n");
            printf("5. The Silence of the Lambs\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 210;
                break;
            case 3:
                seat_price = 220;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 7:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nHOLLYWOOD ANIMATION MOVIES\n");
            printf("1. Toy Story\n");
            printf("2. Frozen\n");
            printf("3. Finding Nemo\n");
            printf("4. The Lion King\n");
            printf("5. Up\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 280;
                break;
            case 2:
                seat_price = 200;
                break;
            case 3:
                seat_price = 190;
                break;
            case 4:
                seat_price = 270;
                break;
            case 5:
                seat_price = 250;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 8:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nHOLLYWOOD FANTASY MOVIES\n");
            printf("1. Harry Potter and the Sorcerer's Stone\n");
            printf("2. The Lord of the Rings: The Fellowship of the Ring\n");
            printf("3. The Hobbit: An Unexpected Journey\n");
            printf("4. Pirates of the Caribbean: The Curse of the Black Pearl\n");
            printf("5. Fantastic Beasts and Where to Find Them\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 240;
                break;
            case 3:
                seat_price = 230;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 9:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nHOLLYWOOD ADVENTURE MOVIES\n");
            printf("1. Jurassic Park\n");
            printf("2. Indiana Jones and the Raiders of the Lost Ark\n");
            printf("3. The Mummy\n");
            printf("4. Jumanji: Welcome to the Jungle\n");
            printf("5. King Kong\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 210;
                break;
            case 3:
                seat_price = 200;
                break;
            case 4:
                seat_price = 290;
                break;
            case 5:
                seat_price = 210;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        default:
            printf("Invalid movie type!\n");
            return 1;
        }
        break;

    case 2:
        system("cls");
        printf("\n**************************************");
        printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
        printf("**************************************\n");
        printf("\nBollywood Movie Types\n");
        printf("1. Action Movies\n");
        printf("2. Comedy Movies\n");
        printf("3. Romance Movies\n");
        printf("4. Thriller Movies\n");
        printf("5. Horror Movies\n");
        printf("6. Drama Movies\n");
        printf("7. Crime Movies\n");
        printf("8. Family Movies\n");
        printf("9. Musical Movies\n");
        printf("Enter Your Choice: ");
        scanf("%d", &movie_type);

        switch (movie_type)
        {
        case 1:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nBOLLYWOOD ACTION MOVIES\n");
            printf("1. War\n");
            printf("2. Dhoom\n");
            printf("3. Singham\n");
            printf("4. Baaghi\n");
            printf("5. Ghajini\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 200;
                break;
            case 3:
                seat_price = 200;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 290;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 2:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nBOLLYWOOD COMEDY MOVIES\n");
            printf("1. Hera Pheri\n");
            printf("2. Welcome\n");
            printf("3. Golmaal\n");
            printf("4. Dhamaal\n");
            printf("5. Chup Chup Ke\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 190;
                break;
            case 2:
                seat_price = 240;
                break;
            case 3:
                seat_price = 280;
                break;
            case 4:
                seat_price = 220;
                break;
            case 5:
                seat_price = 240;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 3:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nBOLLYWOOD ROMANCE MOVIES\n");
            printf("1. Dilwale Dulhania Le Jayenge\n");
            printf("2. Kuch Kuch Hota Hai\n");
            printf("3. Aashiqui 2\n");
            printf("4. Veer-Zaara\n");
            printf("5. Jab We Met\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 190;
                break;
            case 3:
                seat_price = 220;
                break;
            case 4:
                seat_price = 190;
                break;
            case 5:
                seat_price = 180;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 4:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nBOLLYWOOD THRILLER MOVIES\n");
            printf("1. Kahaani\n");
            printf("2. Drishyam\n");
            printf("3. Andhadhun\n");
            printf("4. Badla\n");
            printf("5. Talaash\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 210;
                break;
            case 2:
                seat_price = 220;
                break;
            case 3:
                seat_price = 230;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 5:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nBOLLYWOOD HORROR MOVIES\n");
            printf("1. Bhoot\n");
            printf("2. Raaz\n");
            printf("3. 1920\n");
            printf("4. Stree\n");
            printf("5. Bhediya\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 180;
                break;
            case 3:
                seat_price = 170;
                break;
            case 4:
                seat_price = 200;
                break;
            case 5:
                seat_price = 190;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 6:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nBOLLYWOOD DRAMA MOVIES\n");
            printf("1. Taare Zameen Par\n");
            printf("2. 3 Idiots\n");
            printf("3. Lagaan\n");
            printf("4. Pink\n");
            printf("5. Swades\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 220;
                break;
            case 3:
                seat_price = 210;
                break;
            case 4:
                seat_price = 200;
                break;
            case 5:
                seat_price = 210;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 7:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nBOLLYWOOD CRIME MOVIES\n");
            printf("1. Gangs of Wasseypur\n");
            printf("2. Company\n");
            printf("3. Satya\n");
            printf("4. Once Upon a Time in Mumbaai\n");
            printf("5. Shootout at Lokhandwala\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 200;
                break;
            case 3:
                seat_price = 200;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 8:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nBOLLYWOOD FAMILY MOVIES\n");
            printf("1. Hum Aapke Hain Koun...!\n");
            printf("2. Kabhi Khushi Kabhie Gham\n");
            printf("3. Baghban\n");
            printf("4. Piku\n");
            printf("5. Chak De! India\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 180;
                break;
            case 2:
                seat_price = 200;
                break;
            case 3:
                seat_price = 190;
                break;
            case 4:
                seat_price = 200;
                break;
            case 5:
                seat_price = 210;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 9:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nBOLLYWOOD MUSICAL MOVIES\n");
            printf("1. Rockstar\n");
            printf("2. Aashiqui\n");
            printf("3. Ae Dil Hai Mushkil\n");
            printf("4. Taal\n");
            printf("5. Dil Se..\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 180;
                break;
            case 3:
                seat_price = 210;
                break;
            case 4:
                seat_price = 200;
                break;
            case 5:
                seat_price = 190;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        default:
            printf("Invalid movie type!\n");
            return 1;
        }
        break;

    case 3:
        system("cls");
        printf("\n**************************************");
        printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
        printf("**************************************\n");
        printf("\nTollywood Movie Types\n");
        printf("1. Action Movies\n");
        printf("2. Comedy Movies\n");
        printf("3. Romance Movies\n");
        printf("4. Thriller Movies\n");
        printf("5. Horror Movies\n");
        printf("6. Drama Movies\n");
        printf("7. Family Movies\n");
        printf("8. Fantasy Movies\n");
        printf("9. Crime Movies\n");
        printf("Enter Your Choice: ");
        scanf("%d", &movie_type);

        switch (movie_type)
        {
        case 1:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nTOLLYWOOD ACTION MOVIES\n");
            printf("1. Baahubali: The Beginning\n");
            printf("2. Baahubali 2: The Conclusion\n");
            printf("3. Magadheera\n");
            printf("4. Saaho\n");
            printf("5. Sye\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 250;
                break;
            case 2:
                seat_price = 300;
                break;
            case 3:
                seat_price = 220;
                break;
            case 4:
                seat_price = 240;
                break;
            case 5:
                seat_price = 180;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 2:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nTOLLYWOOD COMEDY MOVIES\n");
            printf("1. Nuvvu Naaku Nachav\n");
            printf("2. Athadu\n");
            printf("3. Dhee\n");
            printf("4. Ready\n");
            printf("5. Kick\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 180;
                break;
            case 2:
                seat_price = 200;
                break;
            case 3:
                seat_price = 170;
                break;
            case 4:
                seat_price = 180;
                break;
            case 5:
                seat_price = 190;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 3:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nTOLLYWOOD ROMANCE MOVIES\n");
            printf("1. Geetha Govindam\n");
            printf("2. Arya\n");
            printf("3. Ye Maaya Chesave\n");
            printf("4. Bommarillu\n");
            printf("5. Manam\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 180;
                break;
            case 3:
                seat_price = 200;
                break;
            case 4:
                seat_price = 190;
                break;
            case 5:
                seat_price = 210;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 4:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nTOLLYWOOD THRILLER MOVIES\n");
            printf("1. Eega\n");
            printf("2. Kshanam\n");
            printf("3. Goodachari\n");
            printf("4. Rangasthalam\n");
            printf("5. 1: Nenokkadine\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 200;
                break;
            case 3:
                seat_price = 210;
                break;
            case 4:
                seat_price = 230;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 5:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nTOLLYWOOD HORROR MOVIES\n");
            printf("1. Arundhati\n");
            printf("2. Raju Gari Gadhi\n");
            printf("3. Masooda\n");
            printf("4. Awe\n");
            printf("5. Gruham\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 190;
                break;
            case 3:
                seat_price = 220;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 6:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nTOLLYWOOD DRAMA MOVIES\n");
            printf("1. Leader\n");
            printf("2. Vedam\n");
            printf("3. Jersey\n");
            printf("4. Rudhramadevi\n");
            printf("5. Mahanati\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 190;
                break;
            case 3:
                seat_price = 230;
                break;
            case 4:
                seat_price = 220;
                break;
            case 5:
                seat_price = 240;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 7:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nTOLLYWOOD FAMILY MOVIES\n");
            printf("1. Sankarabharanamlo Sivudu\n");
            printf("2. Gorintaku\n");
            printf("3. Ala Vaikunthapurramuloo\n");
            printf("4. SVSC\n");
            printf("5. Attarintiki Daredi\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 170;
                break;
            case 2:
                seat_price = 180;
                break;
            case 3:
                seat_price = 230;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 8:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nTOLLYWOOD FANTASY MOVIES\n");
            printf("1. Mayabazar\n");
            printf("2. Anji\n");
            printf("3. Yamadonga\n");
            printf("4. Baahubali: The Beginning\n");
            printf("5. Baahubali 2: The Conclusion\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 180;
                break;
            case 2:
                seat_price = 200;
                break;
            case 3:
                seat_price = 210;
                break;
            case 4:
                seat_price = 190;
                break;
            case 5:
                seat_price = 250;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 9:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nTOLLYWOOD CRIME MOVIES\n");
            printf("1. Khaidi\n");
            printf("2. Tagore\n");
            printf("3. Evaru\n");
            printf("4. Vakeel Saab\n");
            printf("5. HIT: The First Case\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 180;
                break;
            case 2:
                seat_price = 200;
                break;
            case 3:
                seat_price = 220;
                break;
            case 4:
                seat_price = 230;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        default:
            printf("Invalid movie type!\n");
            return 1;
        }
        break;

    case 4:
        system("cls");
        printf("\n**************************************");
        printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
        printf("**************************************\n");
        printf("\nKollywood Movie Types\n");
        printf("1. Action Movies\n");
        printf("2. Comedy Movies\n");
        printf("3. Romance Movies\n");
        printf("4. Thriller Movies\n");
        printf("5. Horror Movies\n");
        printf("6. Drama Movies\n");
        printf("7. Crime Movies\n");
        printf("8. Family Movies\n");
        printf("9. Musical Movies\n");
        printf("Enter Your Choice: ");
        scanf("%d", &movie_type);

        switch (movie_type)
        {
        case 1:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nKOLLYWOOD ACTION MOVIES\n");
            printf("1. Vikram\n");
            printf("2. Master\n");
            printf("3. Ghajini\n");
            printf("4. Theri\n");
            printf("5. Kaithi\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 230;
                break;
            case 2:
                seat_price = 220;
                break;
            case 3:
                seat_price = 210;
                break;
            case 4:
                seat_price = 220;
                break;
            case 5:
                seat_price = 230;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 2:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nKOLLYWOOD COMEDY MOVIES\n");
            printf("1. Panchathanthiram\n");
            printf("2. Boss Engira Baskaran\n");
            printf("3. Soodhu Kavvum\n");
            printf("4. Kalakalappu\n");
            printf("5. OK Kanmani\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 180;
                break;
            case 2:
                seat_price = 170;
                break;
            case 3:
                seat_price = 190;
                break;
            case 4:
                seat_price = 180;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 3:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nKOLLYWOOD ROMANCE MOVIES\n");
            printf("1. Vinnaithaandi Varuvaayaa\n");
            printf("2. 96\n");
            printf("3. Alaipayuthey\n");
            printf("4. Kaadhal\n");
            printf("5. Remo\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 210;
                break;
            case 3:
                seat_price = 190;
                break;
            case 4:
                seat_price = 180;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 4:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nKOLLYWOOD THRILLER MOVIES\n");
            printf("1. Ratsasan\n");
            printf("2. Dhuruvangal Pathinaaru\n");
            printf("3. Thani Oruvan\n");
            printf("4. Yennai Arindhaal\n");
            printf("5. Game Over\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 210;
                break;
            case 3:
                seat_price = 220;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 5:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nKOLLYWOOD HORROR MOVIES\n");
            printf("1. Chandramukhi\n");
            printf("2. Pizza\n");
            printf("3. Demonte Colony\n");
            printf("4. Yaamirukka Bayamey\n");
            printf("5. Maya\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 210;
                break;
            case 3:
                seat_price = 200;
                break;
            case 4:
                seat_price = 190;
                break;
            case 5:
                seat_price = 210;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 6:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nKOLLYWOOD DRAMA MOVIES\n");
            printf("1. Pariyerum Perumal\n");
            printf("2. Asuran\n");
            printf("3. Anbe Sivam\n");
            printf("4. Karnan\n");
            printf("5. Vada Chennai\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 220;
                break;
            case 3:
                seat_price = 190;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 230;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 7:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nKOLLYWOOD CRIME MOVIES\n");
            printf("1. Visaranai\n");
            printf("2. Vada Chennai\n");
            printf("3. Pudhupettai\n");
            printf("4. Aaranya Kaandam\n");
            printf("5. Jigarthanda\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 210;
                break;
            case 2:
                seat_price = 230;
                break;
            case 3:
                seat_price = 200;
                break;
            case 4:
                seat_price = 190;
                break;
            case 5:
                seat_price = 210;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 8:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nKOLLYWOOD FAMILY MOVIES\n");
            printf("1. Pasanga\n");
            printf("2. Varuthapadatha Valibar Sangam\n");
            printf("3. Abhiyum Naanum\n");
            printf("4. Deivamagal\n");
            printf("5. Kadaikutty Singam\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 170;
                break;
            case 2:
                seat_price = 180;
                break;
            case 3:
                seat_price = 190;
                break;
            case 4:
                seat_price = 160;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 9:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nKOLLYWOOD MUSICAL MOVIES\n");
            printf("1. Roja\n");
            printf("2. Bombay\n");
            printf("3. Alaipayuthey\n");
            printf("4. Vinnaithaandi Varuvaayaa\n");
            printf("5. Kandukondain Kandukondain\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 190;
                break;
            case 2:
                seat_price = 200;
                break;
            case 3:
                seat_price = 190;
                break;
            case 4:
                seat_price = 200;
                break;
            case 5:
                seat_price = 180;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        default:
            printf("Invalid movie type!\n");
            return 1;
        }
        break;

    case 5:
        system("cls");
        printf("\n**************************************");
        printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
        printf("**************************************\n");
        printf("\nMollywood Movie Types\n");
        printf("1. Drama Movies\n");
        printf("2. Comedy Movies\n");
        printf("3. Thriller Movies\n");
        printf("4. Action Movies\n");
        printf("5. Romance Movies\n");
        printf("6. Horror Movies\n");
        printf("7. Crime Movies\n");
        printf("8. Family Movies\n");
        printf("9. Social / Realistic Movies\n");
        printf("Enter Your Choice: ");
        scanf("%d", &movie_type);

        switch (movie_type)
        {
        case 1:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nMOLLYWOOD DRAMA MOVIES\n");
            printf("1. Drishyam\n");
            printf("2. Kireedam\n");
            printf("3. Thanmathra\n");
            printf("4. Ayyappanum Koshiyum\n");
            printf("5. Peranbu\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 180;
                break;
            case 3:
                seat_price = 190;
                break;
            case 4:
                seat_price = 230;
                break;
            case 5:
                seat_price = 210;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 2:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nMOLLYWOOD COMEDY MOVIES\n");
            printf("1. Punjabi House\n");
            printf("2. Kilukkam\n");
            printf("3. Godfather\n");
            printf("4. CID Moosa\n");
            printf("5. Kalyanaraman\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 170;
                break;
            case 2:
                seat_price = 180;
                break;
            case 3:
                seat_price = 180;
                break;
            case 4:
                seat_price = 190;
                break;
            case 5:
                seat_price = 170;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 3:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nMOLLYWOOD THRILLER MOVIES\n");
            printf("1. Mumbai Police\n");
            printf("2. Anjaam Pathiraa\n");
            printf("3. Memories\n");
            printf("4. Rorschach\n");
            printf("5. Forensic\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 230;
                break;
            case 3:
                seat_price = 210;
                break;
            case 4:
                seat_price = 240;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 4:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nMOLLYWOOD ACTION MOVIES\n");
            printf("1. Lucifer\n");
            printf("2. Narasimham\n");
            printf("3. Rajamanikyam\n");
            printf("4. Pulimurugan\n");
            printf("5. Spadikam\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 250;
                break;
            case 2:
                seat_price = 220;
                break;
            case 3:
                seat_price = 210;
                break;
            case 4:
                seat_price = 260;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 5:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nMOLLYWOOD ROMANCE MOVIES\n");
            printf("1. Premam\n");
            printf("2. Hridayam\n");
            printf("3. Om Shanti Oshana\n");
            printf("4. Mayaanadhi\n");
            printf("5. Bangalore Days\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 230;
                break;
            case 3:
                seat_price = 200;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 6:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nMOLLYWOOD HORROR MOVIES\n");
            printf("1. Manichitrathazhu\n");
            printf("2. Ezra\n");
            printf("3. Bhoothakaalam\n");
            printf("4. Pretham\n");
            printf("5. Romancham\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 210;
                break;
            case 3:
                seat_price = 230;
                break;
            case 4:
                seat_price = 190;
                break;
            case 5:
                seat_price = 240;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 7:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nMOLLYWOOD CRIME MOVIES\n");
            printf("1. Iyobinte Pusthakam\n");
            printf("2. Kammatti Paadam\n");
            printf("3. Big B\n");
            printf("4. Charlie\n");
            printf("5. Angamaly Diaries\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 230;
                break;
            case 3:
                seat_price = 210;
                break;
            case 4:
                seat_price = 200;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 8:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nMOLLYWOOD FAMILY MOVIES\n");
            printf("1. Thoovanathumbikal\n");
            printf("2. Sandesham\n");
            printf("3. Achuvinte Amma\n");
            printf("4. Veendum Chila Veettukaryangal\n");
            printf("5. How Old Are You\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 180;
                break;
            case 2:
                seat_price = 170;
                break;
            case 3:
                seat_price = 190;
                break;
            case 4:
                seat_price = 170;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 9:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nMOLLYWOOD SOCIAL MOVIES\n");
            printf("1. The Great Indian Kitchen\n");
            printf("2. Jallikattu\n");
            printf("3. Uyare\n");
            printf("4. Sudani from Nigeria\n");
            printf("5. Take Off\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 220;
                break;
            case 2:
                seat_price = 230;
                break;
            case 3:
                seat_price = 210;
                break;
            case 4:
                seat_price = 200;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        default:
            printf("Invalid movie type!\n");
            return 1;
        }
        break;

    case 6:
        system("cls");
        printf("\n**************************************");
        printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
        printf("**************************************\n");
        printf("\nSandalwood Movie Types\n");
        printf("1. Action Movies\n");
        printf("2. Comedy Movies\n");
        printf("3. Romance Movies\n");
        printf("4. Thriller Movies\n");
        printf("5. Horror Movies\n");
        printf("6. Drama Movies\n");
        printf("7. Crime Movies\n");
        printf("8. Family Movies\n");
        printf("9. Historical Movies\n");
        printf("Enter Your Choice: ");
        scanf("%d", &movie_type);

        switch (movie_type)
        {
        case 1:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nSANDALWOOD ACTION MOVIES\n");
            printf("1. KGF: Chapter 1\n");
            printf("2. KGF: Chapter 2\n");
            printf("3. Ugramm\n");
            printf("4. Mufti\n");
            printf("5. Tagaru\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 250;
                break;
            case 2:
                seat_price = 300;
                break;
            case 3:
                seat_price = 220;
                break;
            case 4:
                seat_price = 230;
                break;
            case 5:
                seat_price = 220;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 2:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nSANDALWOOD COMEDY MOVIES\n");
            printf("1. Ganesha Subramanya\n");
            printf("2. Mr. and Mrs. Ramachari\n");
            printf("3. Kirik Party\n");
            printf("4. French Biriyani\n");
            printf("5. Victoria\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 150;
                break;
            case 2:
                seat_price = 180;
                break;
            case 3:
                seat_price = 200;
                break;
            case 4:
                seat_price = 170;
                break;
            case 5:
                seat_price = 160;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 3:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nSANDALWOOD ROMANCE MOVIES\n");
            printf("1. Mungaru Male\n");
            printf("2. Googly\n");
            printf("3. Love Mocktail\n");
            printf("4. Milana\n");
            printf("5. Dia\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 190;
                break;
            case 2:
                seat_price = 180;
                break;
            case 3:
                seat_price = 200;
                break;
            case 4:
                seat_price = 190;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 4:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nSANDALWOOD THRILLER MOVIES\n");
            printf("1. Lucia\n");
            printf("2. U Turn\n");
            printf("3. RangiTaranga\n");
            printf("4. Kavaludaari\n");
            printf("5. Birbal Trilogy Case 1\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 210;
                break;
            case 2:
                seat_price = 200;
                break;
            case 3:
                seat_price = 220;
                break;
            case 4:
                seat_price = 210;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 5:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nSANDALWOOD HORROR MOVIES\n");
            printf("1. Shhh!\n");
            printf("2. Karvva\n");
            printf("3. Aake\n");
            printf("4. 6-5=2\n");
            printf("5. Mummy Save Me\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 170;
                break;
            case 2:
                seat_price = 180;
                break;
            case 3:
                seat_price = 190;
                break;
            case 4:
                seat_price = 160;
                break;
            case 5:
                seat_price = 170;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 6:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nSANDALWOOD DRAMA MOVIES\n");
            printf("1. Kasturi Nivasa\n");
            printf("2. Thithi\n");
            printf("3. Dweepa\n");
            printf("4. Ulidavaru Kandanthe\n");
            printf("5. Bettada Hoovu\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 160;
                break;
            case 2:
                seat_price = 180;
                break;
            case 3:
                seat_price = 170;
                break;
            case 4:
                seat_price = 200;
                break;
            case 5:
                seat_price = 150;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 7:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nSANDALWOOD CRIME MOVIES\n");
            printf("1. Om\n");
            printf("2. Aa Dinagalu\n");
            printf("3. Jailer\n");
            printf("4. Tagaru\n");
            printf("5. Popcorn Monkey Tiger\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 200;
                break;
            case 2:
                seat_price = 190;
                break;
            case 3:
                seat_price = 180;
                break;
            case 4:
                seat_price = 220;
                break;
            case 5:
                seat_price = 200;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 8:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nSANDALWOOD FAMILY MOVIES\n");
            printf("1. Bangarada Manushya\n");
            printf("2. Chomana Dudi\n");
            printf("3. America America\n");
            printf("4. Samskara\n");
            printf("5. Kotha Bangaru Lokam Kannada Dub\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 150;
                break;
            case 2:
                seat_price = 140;
                break;
            case 3:
                seat_price = 160;
                break;
            case 4:
                seat_price = 150;
                break;
            case 5:
                seat_price = 160;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        case 9:
            system("cls");
            printf("\n**************************************");
            printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
            printf("**************************************\n");
            printf("\nSANDALWOOD HISTORICAL MOVIES\n");
            printf("1. Kurukshetra\n");
            printf("2. Kittur Chennamma\n");
            printf("3. Ranadheera Kanteerava\n");
            printf("4. Mysore Mallige\n");
            printf("5. Shakuntala Devi\n");
            printf("Enter Your Choice: ");
            scanf("%d", &movie);
            switch (movie)
            {
            case 1:
                seat_price = 230;
                break;
            case 2:
                seat_price = 160;
                break;
            case 3:
                seat_price = 150;
                break;
            case 4:
                seat_price = 270;
                break;
            case 5:
                seat_price = 180;
                break;
            default:
                printf("Invalid movie choice!\n");
                return 1;
            }
            break;

        default:
            printf("Invalid movie type!\n");
            return 1;
        }
        break;

    default:
        printf("Invalid wood choice!\n");
        return 1;
    }

    system("cls");
    printf("\n**************************************");
    printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
    printf("**************************************\n");
    printf("\nEnter Number of Tickets: ");
    scanf("%d", &tickets);

    printf("Enter Members: ");
    scanf("%d", &members);

    system("cls");
    printf("\n**************************************");
    printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
    printf("**************************************\n");
    printf("\nSelect Seat Type\n");
    printf("1. Gold (+100)\n");
    printf("2. Silver (+50)\n");
    printf("Enter your choice: ");
    scanf("%d", &seat);

    if (seat == 1)
    {
        extra_seat_price = 100;
    }
    else if (seat == 2)
    {
        extra_seat_price = 50;
    }
    else
    {
        extra_seat_price = 0;
    }

    system("cls");
    printf("\n**************************************");
    printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
    printf("**************************************\n");
    printf("\nFood Menu\n");
    printf("1. Popcorn (120)\n");
    printf("2. Coke (80)\n");
    printf("3. Thums Up (100)\n");
    printf("4. Cold Coffee (200)\n");
    printf("5. Cheese Sandwich (180)\n");
    printf("6. French Fries (170)\n");
    printf("7. Samosa (120)\n");
    printf("8. Chocolate Bar (120)\n");
    printf("9. Ice Cream Cup (150)\n");
    printf("10. Brownie (180)\n");
    printf("Enter Food: ");
    scanf("%d", &food);

    switch (food)
    {
    case 1:
        food_price = 120;
        break;
    case 2:
        food_price = 80;
        break;
    case 3:
        food_price = 100;
        break;
    case 4:
        food_price = 200;
        break;
    case 5:
        food_price = 180;
        break;
    case 6:
        food_price = 170;
        break;
    case 7:
        food_price = 120;
        break;
    case 8:
        food_price = 120;
        break;
    case 9:
        food_price = 150;
        break;
    case 10:
        food_price = 180;
        break;
    default:
        printf("Invalid food choice!\n");
        return 1;
    }

    printf("Enter Food Quantity: ");
    scanf("%d", &food_qty);

    system("cls");
    printf("\n**************************************");
    printf("\n\n      \033[31mWELCOME TO PARADISE CINEMAS\033[0m\n\n");
    printf("**************************************\n");
    printf("\nShow Time\n");
    printf("1. Morning (10:00 AM)\n");
    printf("2. Afternoon (2:00 PM)\n");
    printf("3. Evening (6:00 PM)\n");
    printf("4. Night (9:30 PM)\n");
    printf("Enter Slot Time: ");
    scanf("%d", &time_slot);

    total_ticket_price = tickets * (seat_price + extra_seat_price);

    sub_total = total_ticket_price + (food_price * food_qty);
    cgst = sub_total * 0.09f;
    sgst = sub_total * 0.09f;
    net_amount = sub_total + cgst + sgst;

    system("cls");
    printf("\n**************************************");
    printf("\n\n      \033[31mPARADISE CINEMAS TICKET\033[0m\n\n");
    printf("**************************************\n");
    printf("\nCustomer Name : %s", name);
    printf("\nMembers       : %d", members);
    printf("\nTickets       : %d", tickets);
    printf("\nSeat Price    : %.2f", total_ticket_price);
    printf("\nFood Total    : %.2f", food_price * food_qty);
    printf("\nSub Total     : %.2f", sub_total);
    printf("\nCGST (9%%)     : %.2f", cgst);
    printf("\nSGST (9%%)     : %.2f", sgst);
    printf("\n--------------------------------------");
    printf("\nNet Amount    : %.2f", net_amount);
    printf("\nStatus        : CONFIRMED");
    printf("\n======================================\n");

    return 0;
}