#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastırması yemeyi seviyorum. Gerçekten seviyorum!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum.\nBurgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın." << std::endl;
}

void Harl::error(void)
{
	std::cout << "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum." << std::endl;
}

Harl::Harl()
{
}

void Harl::complain(std::string level)
{
	std::string func[4] = {"debug", "info", "warning", "error"};
	for (size_t i = 0; i < 4; i++)
	{
		if (func[i] == level)
			(this->*action[i])();
	}
}