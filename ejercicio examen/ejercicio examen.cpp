// ejercicio examen.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


int main() {
	bool fiebre = true;
	bool tos = true,
    bool respiracion = true;
	std::cout << "Bienvenido al consultorio del doctor Leon, revisemos como estas de salud  0)Si 1)No\n";
	std::cout << "Tiene usted fiebre?\n";
	std::cin >> fiebre;
	std::cout << "Tiene usted tos?\n";
	std::cin >> tos;
	std::cout << "Tiene usted problemas para respirar?\n";
	std::cin >> respiracion;
	if (fiebre, tos, respiracion)
		std::cout << " Vaya al hospital" << std::endl; 
	if (fiebre, tos)
		std::cout << "Quédate en tu casa" << std::endl;
	if (fiebre)
		std::cout << "Puede ser solo gripa" << std::endl;
	if (tos)
		std::cout << "Puede ser solo gripa" << std::endl;
	if (respiracion)
		std::cout << "Puede ser solo gripa" << std::endl;
	if (tos, respiracion)
		std::cout << "Quédate en tu casa" << std::endl;
	if (respiracion, fiebre)
		std::cout << "Quédate en tu casa" << std::endl;


}
