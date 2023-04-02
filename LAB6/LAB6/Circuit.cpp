#include "Circuit.h"
#include <stdio.h>
void Circuit::SetLength(int n)
{
	this->length = n;
}
void Circuit::SetWeather(Weather a)
{
	this->weather = a;
}
void Circuit::AddCar(Car* mycar)
{
	this->carlist[this->i] = mycar;
	this->carAmount++;
}
void Circuit::Race()
{
	//cars that did not finish check
	for (i = 0; i < carAmount; i++)
	{
		Car* c = this->carlist[i];
		c->setlPerKm();
		c->settankSize();
		if (c->tankSize / c->lPerKm < this->length)
		{	
			Car* c = this->carlist[nrOfCarsNF];
			this->carlist[nrOfCarsNF] = this->carlist[i];
			this->carlist[i] = c;
			this->nrOfCarsNF++;
		}

	}
	
		if (this->weather == sunny)
		{
			for(i= nrOfCarsNF;i<carAmount-1;i++)
				for (j = i + 1; j < carAmount; j++)
				{
					Car* a = this->carlist[i];
					Car* b =this-> carlist[j];
					a->setSpeedSunny(); b->setSpeedSunny();
					if (a->avgSpeedSunny > b->avgSpeedSunny)
					{
						Car* c = this->carlist[i];
						this->carlist[i] = this->carlist[j];
						this->carlist[j] = c;
					}
				}
		}
		if (this->weather == rainy)
		{
			for (i = nrOfCarsNF; i < carAmount - 1; i++)
				for (j = i + 1; j < carAmount; j++)
				{
					Car* a = this->carlist[i];
					Car* b = this->carlist[j];
					a->setSpeedRainy(); b->setSpeedRainy();
					if (a->avgSpeedRainy > b->avgSpeedRainy)
					{
						Car* c = this->carlist[i];
						this->carlist[i] = this->carlist[j];
						this->carlist[j] = c;
					}
				}
		}
		if (this->weather == snowy)
		{
			for (i = nrOfCarsNF; i < carAmount - 1; i++)
				for (j = i + 1; j < carAmount; j++)
				{
					Car* a = this->carlist[i];
					Car* b = this->carlist[j];
					a->setSpeedSnowy(); b->setSpeedSnowy();
					if (a->avgSpeedSnowy > b->avgSpeedSnowy)
					{
						Car* c = this->carlist[i];
						this->carlist[i] = this->carlist[j];
						this->carlist[j] = c;
					}
				}
		}

}
void Circuit::ShowWhoDidNotFinish()
{
	for (i = 0; i < nrOfCarsNF; i++)
	{
		Car* c = carlist[i];
		c->setName();
		printf("%s did not finish\n",c->Name);
	}
	printf("\n");
}
void Circuit::ShowFinalRanks()
{
	for (i = nrOfCarsNF; i < carAmount; i++)
	{
		Car* c = carlist[i];
		c->setName();
		printf("%s finished #%d", c->Name, i - nrOfCarsNF + 1);
	}
	printf("\n");
}
