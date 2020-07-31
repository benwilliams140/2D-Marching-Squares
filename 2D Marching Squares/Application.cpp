#include "Application.h"

Application::Application()
{
	srand(time(NULL));

	board = new Board();

	int _windowWidth = board->getRenderWidth() + GUI_WIDTH;
	int _windowHeight = board->getRenderHeight();

	window = new Window(WINDOW_TITLE, _windowWidth, _windowHeight);
	gui = new GUI(window, GUI_WIDTH, _windowHeight);

	initGUI();
}

Application::~Application()
{

}

void Application::start()
{
	loop();
}

void Application::loop()
{
	sf::Clock _clock;
	window->setFrameLimit(60);

	while (window->isOpen())
	{
		getInput();
		update(_clock.restart().asSeconds());
		render();
	}
}

void Application::getInput()
{
	sf::Event _event;
	while (window->pollEvent(_event))
	{
		if (_event.type == sf::Event::Closed) window->close();

		gui->handleEvent(_event);
	}
}

void Application::update(float _deltaTime)
{

}

void Application::render()
{
	window->clear();

	board->render(window);
	gui->render();

	window->display();
}

void Application::initGUI()
{

}