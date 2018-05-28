note
	description: "Proyecto 3, problema de empacado"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		do
			--| Add your code here
			print ("Hello Eiffel World!%N")

			print (semilla)
		end

feature {NONE}-- Access
	input_usuario: INTEGER
	tamanioCajas, tamanioMaximoObjetos, semilla, numeroObjetos: INTEGER


feature {NONE} -- Element change
	set_tamanioCajas(valor: INTEGER)
		require
			valorNoNegativo: valor > 0
		do
			tamanioCajas := valor

		end

	set_tamanioMaximoObjetos(valor: INTEGER)
		require
			valorNoNegativo: valor > 0
			valorMenorAtamanioCajas: tamanioCajas > valor
		do
			tamanioMaximoObjetos := valor
		end

	set_semilla(valor: INTEGER)
		require
			valorNoNegativo: valor > 0
		do
			semilla := valor
		end

	set_numeroObjetos(valor: INTEGER)
		require
			valorNoNegativo: valor > 0
		do
			numeroObjetos := valor
		end



end -- Class APPLICATION
