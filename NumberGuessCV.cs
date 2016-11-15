using System;
namespace CVGuessing
{
	class NumberGuessCV
	{
		static void Main(string[] args)
		{
			
			int guess = 0;
			bool correct = false;

			Console.Write("I'm thinking of a number between 1 and 100.\nPlease enter in your guess here: ");

			while (!correct)
			{
				string input = Console.ReadLine();

				if (!int.TryParse(input, out guess))
				{
					Console.WriteLine("Incorrect: All Reponses need to be in number format i.e 1,2,3. No four five, six. Please try again");
					continue;
				}
				else
				{
					correct = true;
					Console.WriteLine("I don't care what you guessed Caesar Vision Still sucks");
				}
			}
		}
	}
}