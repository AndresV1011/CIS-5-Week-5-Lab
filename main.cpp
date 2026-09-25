#include <iostream>

// Lab 5 — Your Name
// CIS 5 Week 05 · Eligibility check

int main() {
  int age = 15;
  double gpa = 4.3;

  // TODO: cout question, then cin, for age and for gpa
  
  std::cout << "How old are you?\n";
  std::cin >> age;
  std::cout << "What is your GPA?\n";
  std::cin >> gpa;

	  // Thresholds: adult at 18, honors at 3.5 (change these and say why in a comment)
	  // TODO: bool adult = ...;
	  // TODO: bool honors = ...;

  bool adult = age >= 20;
  bool honors = gpa >= 3.8;
  
  // I changed the adult age to 20, one because I was instructed change it, but two because I feel like adulthood does not start until early 20's
  // I changed GPA to 3.8 because my home highschool had a bunch of programs, but you needed a 3.8 to get a spot in it
  
  
  // TODO: if (adult && honors) { ... }        best case first
  // TODO: else if (adult || honors) { ... }   exactly one requirement met
  // TODO: else { ... }                        neither — the program still answers
  if (adult && honors) { std::cout << "Eligible for honors program!\n"; }
  else if (adult || honors) { std::cout << "Almost there! One requirement met.\n"; }
  else { std::cout << "Not eligible yet!\n"; }

  // Edge values to run: 17 / 18 with a 3.8, and 3.4 / 3.5 with age 20


  return 0;
}
