![EACirc](https://raw.githubusercontent.com/wiki/petrs/EACirc/img/logo-home.png)  
[![Build Status](https://travis-ci.org/crocs-muni/eacirc.svg?branch=master)](https://travis-ci.org/crocs-muni/eacirc)  
[![Coverity status](https://scan.coverity.com/projects/7192/badge.svg)](https://scan.coverity.com/projects/crocs-muni-eacirc)  
EACirc is a framework for automatic problem solving. It uses supervised learning techniques based on evolutionary algorithms to construct and optimize software circuits in order to solve the given problem.

Problems are solved by the means of hardware-like circuits - small, software-emulated circuits consisting of gates and interconnecting wires transforming input data into desired output data. The layout of these circuits is designed randomly at first. They are subsequently optimized in the process of supervised learning (inputs are provided alongside with correct outputs) until the the desired success rate is achieved. 

The learning stage incorporates genetic programming principles:  
* a handful of these circuits (circuit 'population') is considered simultaneously;
* each individual circuit is evaluated on the data and its 'fitness' is determined by comparison of its outputs with the expected outputs;
* individuals with low 'fitness' are deleted (survival of the fittest);
* individuals with high 'fitness' are altered ('sexiual crossover' and a small chance of 'mutation');
* the process starts over with this new 'generation' of circuits.

## The Framework

The EACirc framework consists of main application and several supporting tools and scripts. The modular design allows for easy addition of new problem modules ('projects') and output interpretation modules ('evaluators'). Currently, the project has following main parts:
* **EACirc** - the main application, constructs circuits using evolutionary principles.
* **OneClick** - an automatic work generator for extensive computations in BOINC infrastructure
* **utils** - set of scripts and small programs used for results processing.

For more information and details see [project wiki pages](http://github.com/petrs/EACirc/wiki/Home).

## Authors
The framework is developed at the [Centre for Research on Cryptography and Security (formerly Laboratory of Security and Applied Cryptography)](https://www.fi.muni.cz/research/crocs/), [Masaryk University](http://www.muni.cz/), Brno, Czech Republic.

* **Michal Hajas** 2015-now (Java bytecode emulator)
* **Karel Kubíček** 2014-now (TEA)
* **Jiří Novotný** 2014-now (build system, CUDA core implementation)
* **Ľubomír Obrátil** 2014-now (automation tools)
* **Zdenek Říha** 2013-now (Java bytecode emulator)
* **Marek Sýs** 2013-now (project concept, results interpretation)
* **Petr Švenda** 2008-now (project lead, initial implementation)
* **Martin Ukrop** 2012-now (framework model, refactoring, SHA-3 candidates testing, supporting tools)

Former participation:
* **Milan Čermák** 2012-2013 (CUDA support)
* **Dušan Klinec** 2012-2015 (polynomial circuits, BOINC related support)
* **Ondrej Dubovec** 2011-2012 (SHA-3 candidates testing)
* **Matěj Prišťák** 2011-2012 (object model and refactoring, XML support, eStream candidates testing)
* **Tobiáš Smolka** 2011-2012 (BOINC related support)
 
