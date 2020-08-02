int main() {
   
   double colombian_Pesos, brazillian_Reals, peruvian_Soles ;

   std::cout << " enter the colombian_pesos:";
   std::cin>> colombian_Pesos;
   std::cout << " enter the brazillian_reals:";
   std::cin>> brazillian_Reals;
   std::cout << "enter the peruvian_soles:";
   std::cin>> peruvian_Soles;

double ctu, btu, ptu, total_usd ;
 ctu =  0.00032 * colombian_Pesos;
 btu =  0.27 * brazillian_Reals ;
 ptu = 0.3 * peruvian_Soles;


 total_usd = ctu + btu + ptu ;

 std::cout << " US Dollars =  " << total_usd ;
  
}
