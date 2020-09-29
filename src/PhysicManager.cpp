/*
 *	MIT License
 *
 *	Copyright (c) 2020 Gaëtan Dezeiraud and Ribault Paul
 *
 *	Permission is hereby granted, free of charge, to any person obtaining a copy
 *	of this software and associated documentation files (the "Software"), to deal
 *	in the Software without restriction, including without limitation the rights
 *	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *	copies of the Software, and to permit persons to whom the Software is
 *	furnished to do so, subject to the following conditions:
 *
 *	The above copyright notice and this permission notice shall be included in all
 *	copies or substantial portions of the Software.
 *
 *	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *	SOFTWARE.
 */

#include "PhysicManager.h"

#include <thread>

namespace ExoEngine {

	PhysicManager::PhysicManager(void)
	{

	}

	PhysicManager::~PhysicManager(void)
	{

	}

	void	PhysicManager::add(Hitbox* hitbox)
	{

	}

	void	PhysicManager::remove(Hitbox* hitbox)
	{

	}

	void	PhysicManager::run(void)
	{
		static std::chrono::high_resolution_clock::time_point	prev;
		std::chrono::high_resolution_clock::time_point			now;
		static const double										speed = (float)1 / (float)60;
		double													diff;

		now = std::chrono::high_resolution_clock::now();
		diff = (double)std::chrono::duration_cast<std::chrono::microseconds>(now - prev).count() / 1000000;
		if (diff < speed)
			std::this_thread::sleep_for(std::chrono::microseconds((size_t)((speed - diff) * 1000000)));
		now = std::chrono::high_resolution_clock::now();
		diff = (double)std::chrono::duration_cast<std::chrono::microseconds>(now - prev).count() / 1000000;

		prev = now;
	}

}