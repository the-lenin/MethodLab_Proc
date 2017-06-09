#include "main.h"
#include "gtest/gtest.h"


TEST(ProcedTest, ProcedIn)
{
	ifstream file("ProcedIn.txt");
	proced *actual = new proced, *expected;
	expected = new proced;
	In(*actual, file);
	expected->age = 1996;
	expected->abstr = false;
	expected->reference = 10000;
	EXPECT_TRUE((actual->abstr == expected->abstr));
}

TEST(ProcedTest, ProcedOut)
{
	ofstream file("ProcedOut.txt");
	proced* s = new proced;
	s->t = PROCED;
	s->abstr = true;
	s->age = 1991;
	Out(*s, file);
	file.close();
	ifstream actualFile("ProcedOut.txt"), expectedFile("ProcedOutPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}


TEST(LangTest, LangYearsOld)
{
	lang *actual = new lang;
	actual->t = PROCED;
	((proced*)actual)->abstr = true;
	actual->age = 1991;
	float ActualVolume = YearsOld(*actual);
	float ExpectedVolume = 2017 - 1991;
	EXPECT_TRUE(YearsOld(*actual) == 2017 - 1991);
}

TEST(OOPTest, OOPIn)
{
	ifstream file("OOPIn.txt");
	oop *actual = new oop, *expected;
	expected = new oop;
	In(*actual, file);
	expected->t = OOP;
	expected->a = oop::inheritance::INTERF;
	EXPECT_TRUE(actual->a == expected->a);
	
}

TEST(OOPTest, OOPOut)
{
	ofstream file("OOPOut.txt");
	oop* p = new oop;
	p->t = OOP;
	p->age = 1991;
	p->a = oop::inheritance::INTERF;
	Out(*p, file);
	file.close();
	ifstream actualFile("OOPOut.txt"), expectedFile("OOPOutPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}


TEST(FunctionalTest, FunctionalIn)
{
	ifstream file("FunctionalIn.txt");
	functional *actual = new functional, *expected;
	expected = new functional;
	In(*actual, file);
	expected->t = FUNCTIONAL;
	expected->lazycalc = true;
	expected->typ = functional::typification::DYNAMIC;
	EXPECT_TRUE(actual->lazycalc == expected->lazycalc || actual->typ == expected->typ);
}

TEST(FunctionalTest, FunctionalOut)
{
	ofstream file("FunctionalOut.txt");
	functional* t = new functional;
	t->t = FUNCTIONAL;
	t->lazycalc = 1;
	t->age = 1998;
	t->typ = functional::typification::DYNAMIC;

	Out(*t, file);
	file.close();
	ifstream actualFile("FunctionalOut.txt"), expectedFile("FunctionalOutPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(InputLangTest, InputProcedInLang)
{
	ifstream file("InputProcedInLang.txt");
	lang *actual = In(file);
	lang *expected = new lang;
	((proced *)expected)->abstr = false;
	expected->t = PROCED;
	expected->age = 1950;
	expected->reference = 65000;
	EXPECT_TRUE(((proced *)expected)->abstr == ((proced *)actual)->abstr);
	EXPECT_TRUE(expected->t == actual->t);
	EXPECT_TRUE(expected->reference == actual->reference);
	EXPECT_TRUE(expected->age == actual->age);
}

TEST(InputLangTest, InputOOPInLang)
{
	ifstream file("InputOOPInLang.txt");
	lang *actual = In(file);
	lang *expected = new lang;
	((oop *)expected)->reference = oop::inheritance::SINGLE;
	expected->t = OOP;
	expected->age = 1990;
	expected->reference = 678000;
	EXPECT_TRUE(((oop *)expected)->reference == ((oop *)actual)->reference);
	EXPECT_TRUE(expected->t == actual->t);
	EXPECT_TRUE(expected->age == actual->age);
	EXPECT_TRUE(expected->reference == actual->reference);
}

TEST(InputLangTest, InputFunctionalInLang)
{
	ifstream file("InputFunctionalInLang.txt");
	lang *actual = In(file);
	lang *expected = new lang;
	((functional *)expected)->lazycalc = false;
	((functional *)expected)->typ = functional::typification::EXACT;
	expected->t = FUNCTIONAL;
	expected->age = 1995;
	expected->reference = 654000;
	EXPECT_TRUE(((functional *)expected)->lazycalc == ((functional *)actual)->lazycalc);
	EXPECT_TRUE(((functional *)expected)->typ == ((functional *)actual)->typ);
	EXPECT_TRUE(expected->t == actual->t);
	EXPECT_TRUE(expected->age == actual->age);
	EXPECT_TRUE(expected->reference == actual->reference);
}

TEST(OutputLangTest, LangProcedOutput)
{
	ofstream file("LangProcedOutput.txt");
	lang *expected = new lang;
	((proced *)expected)->abstr = false;
	expected->t = PROCED;
	expected->age = 1950;
	expected->reference = 65000;
	Out(expected, file);
	file.close();
	ifstream actualFile("LangProcedOutput.txt"), expectedFile("LangProcedOutputPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputLangTest, LangOOPOutput)
{
	ofstream file("LangOOPOutput.txt");
	lang *s = new lang;
	(s)->t = OOP;
	((oop *)s)->a = oop::inheritance::MULTIPLE;
	s->age = 1920;
	s->reference = 700;
	Out(s, file);
	file.close();
	ifstream actualFile("LangOOPOutput.txt"), expectedFile("LangOOPOutputPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputLangTest, LangFunctionalOutput)
{
	ofstream file("LangFunctionalOutput.txt");
	lang *s = new lang;
	((functional*)s)->t = FUNCTIONAL;
	((functional *)s)->lazycalc = false;
	((functional *)s)->typ = functional::typification::EXACT;
	s->age = 1950;
	s->reference = 6500;
	Out(s, file);
	file.close();
	ifstream actualFile("LangFunctionalOutput.txt"), expectedFile("LangFunctionalOutputPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}



TEST(LangCompareYearsOldTest, CompareYearsOldMore)
{
	lang *s1 = new lang;
	((functional*)s1)->age = 1993;

	lang *s2 = new lang;
	((functional*)s2)->age = 1992;
	EXPECT_TRUE(Compare(s1, s2));
}

TEST(LangCompareYearsOldTest, CompareYearsOldLess)
{
	lang *s1 = new lang;
	((functional*)s1)->age = 1991;

	lang *s2 = new lang;
	((functional*)s2)->age = 1992;
	EXPECT_TRUE(!Compare(s1, s2));
}

TEST(LangCompareYearsOldTest, CompareYearsOldEqually)
{
	lang *s1 = new lang;
	((functional*)s1)->age = 1992;

	lang *s2 = new lang;
	((functional*)s2)->age = 1992;
	EXPECT_TRUE(!Compare(s1, s2));
}


TEST(ClearContainerTest, ClearEmptyContainer)
{
	container *c = new container;
	c->cont = NULL;
	c->NUM = 0;

	ClearContainer(*c);
	EXPECT_TRUE(c->cont == NULL);
	EXPECT_EQ(c->NUM, 0);
}

TEST(ClearContainerTest, ClearNonEmptyContainer)
{
	container *c = new container;
	c->cont = new list;
	c->cont->language = new lang;

	c->NUM = 1;

	ClearContainer(*c);
	EXPECT_TRUE(c->cont == NULL);
	EXPECT_EQ(c->NUM, 0);
}

TEST(InputContainerTest, OneProcedInContainer)
{
	ifstream file("OneProcedInContainer.txt");
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = NULL;
	In(*actual, file);
	container *expected = new container;
	expected->NUM = 1;
	expected->cont = new list;
	expected->cont->next = NULL;
	expected->cont->language = new lang;
	expected->cont->language->t = PROCED;
	expected->cont->language->reference = 100000;
	expected->cont->language->age = 1950;
	((proced*)expected->cont->language)->abstr = false;
	EXPECT_TRUE(CompareContainer(actual, expected));
}


TEST(InputContainerTest, OneOOPInContainer)
{
	ifstream file("OneOOPInContainer.txt");
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = NULL;
	In(*actual, file);
	container *expected = new container;
	expected->NUM = 1;
	expected->cont = new list;
	expected->cont->next = NULL;
	expected->cont->language = new lang;
	expected->cont->language->t = OOP;
	expected->cont->language->reference = 100000;
	expected->cont->language->age = 1950;
	((oop*)expected->cont->language)->a = oop::inheritance::MULTIPLE;
	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(InputContainerTest, OneFunctionalInContainer)
{
	ifstream file("OneFunctionalInContainer.txt");
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = NULL;
	In(*actual, file);
	container *expected = new container;
	expected->NUM = 1;
	expected->cont = new list;
	expected->cont->next = NULL;
	expected->cont->language = new lang;
	expected->cont->language->t = FUNCTIONAL;
	expected->cont->language->reference = 100000;
	expected->cont->language->age = 1950;
	((functional*)expected->cont->language)->lazycalc = true;
	((functional*)expected->cont->language)->typ = functional::typification::EXACT;
	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(InputContainerTest, NoElementsInContainer)
{
	//ifstream file("NoElementsInContainer.txt");
	container *actual = new container;
	actual->cont = NULL;
	actual->NUM = 0;
	//In(*actual, file);

	container *expected = new container;
	expected->cont = NULL;
	expected->NUM = 0;
	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(InputContainerTest, SeveralElementsInContainer)
{
	ifstream file("SeveralElementsInContainer.txt");
	container *actual = new container;
	actual->cont = NULL;
	actual->NUM = 0;
	In(*actual, file);

	container *expected = new container;
	ContainerPattern(expected);
	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(OutputContainerTest, SeveralElementsOutContainer)
{
	ofstream file("SeveralElementOutContainer.txt");
	container *actual = new container;
	ContainerPattern(actual);
	Out(*actual, file);
	file.close();

	ifstream actualFile("SeveralElementOutContainer.txt"), expectedFile("SeveralElementOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputContainerTest, OneFunctionalOutContainer)
{
	container *actual = new container;
	actual->NUM = 1;
	actual->cont = new list;
	actual->cont->next = NULL;
	actual->cont->language = new lang;
	actual->cont->language->t = FUNCTIONAL;
	actual->cont->language->reference = 100000;
	actual->cont->language->age = 1950;
	((functional*)actual->cont->language)->lazycalc = true;
	((functional*)actual->cont->language)->typ = functional::typification::EXACT;


	ofstream file("OneFunctionalOutContainer.txt");
	Out(*actual, file);
	file.close();

	ifstream actualFile("OneFunctionalOutContainer.txt"), expectedFile("OneFunctionalOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputContainerTest, OneOOPOutContainer)
{
	ofstream file("OneOOPOutContainer.txt");
	container *actual = new container;
	actual->NUM = 1;
	actual->cont = new list;
	actual->cont->next = NULL;
	actual->cont->language = new lang;
	actual->cont->language->t = OOP;
	actual->cont->language->reference = 100000;
	actual->cont->language->age = 1950;
	((oop*)actual->cont->language)->a = oop::inheritance::SINGLE;
	Out(*actual, file);
	file.close();

	ifstream actualFile("OneOOPOutContainer.txt"), expectedFile("OneOOPOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputContainerTest, OneProcedOutContainer)
{
	ofstream file("OneProcedOutContainer.txt");
	container *actual = new container;
	actual->NUM = 1;
	actual->cont = new list;
	actual->cont->next = NULL;
	actual->cont->language = new lang;
	actual->cont->language->t = PROCED;
	actual->cont->language->reference = 100000;
	actual->cont->language->age = 1950;
	((proced*)actual->cont->language)->abstr = true;
	Out(*actual, file);
	file.close();

	ifstream actualFile("OneProcedOutContainer.txt"), expectedFile("OneProcedOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputContainerTest, NoElementsOutContainer)
{
	//ofstream file("NoElementsOutContainer.txt");
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = NULL;

	//Out(*actual, file);
//	file.close();

	ASSERT_FALSE(0);
//	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
//	actualFile.close();
//	expectedFile.close();
}

TEST(OutputContainerTest, OnlySeveralSpheresOutContainer)
{
	ofstream file("OnlySeveralSpheresOutContainer.txt");
	container *actual = new container;
	ContainerPattern(actual);
	OutOnlyProced(*actual, file);
	file.close();

	ifstream actualFile("OnlySeveralSpheresOutContainer.txt"), expectedFile("OnlySeveralSpheresOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}


TEST(OutputContainerTest, NoProcedOutContainer)
{
	ofstream file("NoSpheresOutContainer.txt");
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = NULL;
	OutOnlyProced(*actual, file);
	file.close();

	ifstream actualFile("NoProcedOutContainer.txt"), expectedFile("NoProcedOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(SortContainerTest, JustSortContainer)
{

	container *actual = new container;
	ContainerPattern(actual);
	Sort(*actual);


	container *expected = new container;
	SortedContainerPattern(expected);

	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(SortContainerTest, DoubleSortedContainer)
{
	container *actual = new container;
	ContainerPattern(actual);
	Sort(*actual);
	Sort(*actual);

	container *expected = new container;
	SortedContainerPattern(expected);

	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(SortContainerTest, OneProcedInContainer)
{
	container *actual = new container;
	actual->NUM = 1;
	actual->cont = new list;
	actual->cont->next = NULL;
	actual->cont->language = new lang;
	actual->cont->language->t = PROCED;
	actual->cont->language->reference = 100000;
	actual->cont->language->age = 1950;
	((proced*)actual->cont->language)->abstr = true;
	Sort(*actual);

	container *expected = new container;
	expected->NUM = 1;
	expected->cont = new list;
	expected->cont->next = NULL;
	expected->cont->language = new lang;
	expected->cont->language->t = PROCED;
	expected->cont->language->reference = 100000;
	expected->cont->language->age = 1950;
	((proced*)expected->cont->language)->abstr = true;
	EXPECT_TRUE(CompareContainer(actual, expected));
}


TEST(SortContainerTest, ReversedSortContainer)
{
	container *c = new container;
	c->NUM = 6;
	c->cont = new list;
	list* cur = c->cont;
	cur->language = new lang;
	cur->next = new list;
	((oop*)cur->language)->t = OOP;
	((oop*)cur->language)->age = 1985;
	((oop*)cur->language)->a = oop::inheritance::MULTIPLE;
	((oop*)cur->language)->reference = 10500;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((proced*)cur->language)->t = PROCED;
	((proced*)cur->language)->abstr = false;
	((proced*)cur->language)->age = 1990;
	((proced*)cur->language)->reference = 20000;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((oop*)cur->language)->t = OOP;
	((oop*)cur->language)->age = 1991;
	((oop*)cur->language)->a = oop::inheritance::INTERF;
	((oop*)cur->language)->reference = 100000;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((proced*)cur->language)->t = PROCED;
	((proced*)cur->language)->abstr = true;
	((proced*)cur->language)->age = 1995;
	((proced*)cur->language)->reference = 500;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((functional*)cur->language)->t = FUNCTIONAL;
	((functional*)cur->language)->lazycalc = false;
	((functional*)cur->language)->age = 1997;
	((functional*)cur->language)->reference = 35400;
	((functional*)cur->language)->typ = functional::typification::DYNAMIC;

	cur = cur->next;
	cur->language = new lang;
	cur->next = NULL;
	((functional*)cur->language)->t = FUNCTIONAL;
	((functional*)cur->language)->lazycalc = true;
	((functional*)cur->language)->age = 1998;
	((functional*)cur->language)->reference = 354;
	((functional*)cur->language)->typ = functional::typification::DYNAMIC;

	Sort(*c);

	container *expected = new container;
	SortedContainerPattern(expected);

	EXPECT_TRUE(CompareContainer(c, expected));
}

TEST(SortContainerTest, NothingInContainer)
{
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = new list;
	actual->cont->next = NULL;
	actual->cont->language = NULL;
	Sort(*actual);

	container *expected = new container;
	expected->NUM = 0;
	expected->cont = new list;
	expected->cont->next = NULL;
	expected->cont->language = NULL;

	EXPECT_TRUE(CompareContainer(actual, expected));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	system("pause");
	return 0;
}