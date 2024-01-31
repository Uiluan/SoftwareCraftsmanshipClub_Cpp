// #include <iostream>
// #include <sstream>
// #include <stack>
// #include <map>
// #include <cctype>

// double parse(std::string::iterator& it);

// double parseNumber(std::string::iterator& it) {
//     std::string number;
//     while(std::isdigit(*it)) {
//         number += *it;
//         ++it;
//     }
//     return std::stod(number);
//     // TODO: Maybe do this for next chapter? (I added this to debug)
//     //     try {
//     //     return std::stod(number);
//     // } catch (std::invalid_argument&) {
//     //     std::cerr << "Invalid number: " << number << std::endl;
//     //     return 0;
//     // }
// }

// double parseFactor(std::string::iterator& it) {
//     if(*it == '(' || *it == ' ') {
//         ++it; // skip '(' and ' '
//         if (*it == ')') {
//             ++it; // skip ')'
//             return 0;
//         }
//         double value = parse(it);
//         ++it; // skip ')'
//         return value;
//     }
//     return parseNumber(it);
// }

// double parseTerm(std::string::iterator& it) {
//     double value = parseFactor(it);
//     while(*it == '*' || *it == '/') {
//         if(*it == '*') {
//             ++it; // skip '*'
//             value *= parseFactor(it);
//         } else {
//             ++it; // skip '/'
//             value /= parseFactor(it);
//         }
//     }
//     return value;
// }

// double parse(std::string::iterator& it) {
//     double value = parseTerm(it);
//     while(*it == '+' || *it == '-') {
//         if(*it == '+') {
//             ++it; // skip '+'
//             value += parseTerm(it);
//         } else {
//             ++it; // skip '-'
//             value -= parseTerm(it);
//         }
//     }
//     return value;
// }

// double evaluate(std::string& expression) {
//     std::string::iterator it = expression.begin();
//     return parse(it);
// }

// TODO: Make work with final cases (Next chapter)?
// 3 + ( 2 * 1 ) -> Invalid record error
int main() {
    // ( 1 + ( ( 2 + 3 ) * (4 * 5) ) ) -> 101
    // std::string expression = "( 1 + ( ( 2 + 3 ) * (4 * 5) ) )";
    // std::cout << evaluate(expression) << std::endl;
    // // ( 5 * ( 4 * ( 3 * ( 2 * ( 1 * 9 ) / 8 - 7 ) + 6 ) ) ) -> 101
    // expression = "( 5 * ( 4 * ( 3 * ( 2 * ( 1 * 9 ) / 8 - 7 ) + 6 ) ) )";
    // std::cout << evaluate(expression) << std::endl;
    // // ((()())) -> 101
    // expression = "((()()))";
    // std::cout << evaluate(expression) << std::endl;
    return 0;
}

