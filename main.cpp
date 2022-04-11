#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"

int main()
{
    nlohmann::json film;
    film["origin"]="USA";
    film["created"]=2003;
    film["studio"]="Wiseau-Films";
    film["writer"]="Tommy Wiseau";
    film["title"]="The Room";
    film["cast"]={"Tommy Wiseau as Johnny", "Juliette Danielle as Lisa","Greg Sestero as Mark"};

    std::ofstream json_file("films.json");

    json_file << film;
    return 0;
}
