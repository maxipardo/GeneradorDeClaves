#include <string>
#include <algorithm>
#include <random>

std::string generarContraseña(int longitud) {

    const std::string minus { "abcdefghijklmnopqrstuvwxyz" };
    const std::string mayus { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    const std::string nums { "1234567890" };
    const std::string special { "!@#$%^&*" };

    const std::string caracteres { minus + mayus + nums + special };

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist_mayus(0, mayus.length() - 1);
    std::uniform_int_distribution<> dist_nums(0, nums.length() - 1);
    std::uniform_int_distribution<> dist_special(0, special.length() - 1);
    std::uniform_int_distribution<> dist_caracteres(0, caracteres.length() - 1);

    std::string result;
    result.reserve(longitud);
    result += mayus[dist_mayus(gen)];
    result += mayus[dist_mayus(gen)];
    result += nums[dist_nums(gen)];
    result += special[dist_special(gen)];

    for (int i = 4; i < longitud; ++i) {
        char next_char = caracteres[dist_caracteres(gen)];
        if (isprint(next_char)) {
            result += next_char;
        } else {
            --i;
        }
    }

    // Mezclar caracteres
    std::shuffle(result.begin(), result.end(), gen);

    return result;
}
