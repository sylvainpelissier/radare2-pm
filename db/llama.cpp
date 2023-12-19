R2PM_BEGIN

R2PM_GIT https://github.com/ggerganov/llama.cpp
R2PM_DESC "The most advanced and performant opensource language model implementation"

R2PM_NEEDS "gcc make cmake"

R2PM_INSTALL() {
	export CMAKE_CXX_FLAGS=-fPIC
	cmake -DCMAKE_INSTALL_PREFIX:PATH=${R2PM_PREFIX} .
	${MAKE} -j4
	${R2PM_SUDO} ${MAKE} install
}

R2PM_UNINSTALL() {
	${R2PM_SUDO} ${MAKE} uninstall
}

R2PM_END
