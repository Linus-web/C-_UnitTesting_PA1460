#include "pch.h"
#include "../Software1460_lib/Cat.h"

TEST(CatTest, AgeTest) {
    Cat bob(12, "Bob", "Black"); // Skapa Cat med samma v�rden som i main()
    EXPECT_EQ(bob.getAge(), 12); // Kontrollera att �ldern �r korrekt
}
