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
			-- print ("Hello Eiffel World!%N")
            set_tamanioCajas(get_inputUsuario())
            set_tamanioMaximoObjetos(7)
            set_semilla(2018)
            set_numeroObjetos(20)

			solicitarDatos()
		end

feature {NONE}-- Access
	entradaUsuario: INTEGER
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
			valorMenorAtamanioCajas: valor < tamanioCajas
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

feature {NONE}
	solicitarTamanioCajas(input: INTEGER)
		require
				print("Ingrese el tamaño de las cajas:")
				input : entradaUsuario = get_inputUsuario()

		do
			inspect entradaUsuario
   				when /= 0 then
					Io.new_line
					print("Se ha establecido el valor por default.")
					Io.new_line
				else
					set_tamanioCajas(entradaUsuario)
			end
		end

feature {NONE}
	solicitarDatos()
		do
			print("Ingrese el tamaño de las cajas:")
			entradaUsuario := get_inputUsuario()
			inspect entradaUsuario
   				when 0 then
					Io.new_line
					print("Se ha establecido el valor por default.")
					Io.new_line

				else
					set_tamanioCajas(entradaUsuario)
			end

			Io.new_line
			print("Ingrese el tamaño maximo de los objetos:")
			entradaUsuario := get_inputUsuario()
			inspect entradaUsuario
   				when 0 then
					Io.new_line
					print("Se ha establecido el valor por default.")
					Io.new_line

				else
					set_tamanioMaximoObjetos(entradaUsuario)
			end

			Io.new_line
			print("Ingrese el valor de la semilla:")
			entradaUsuario := get_inputUsuario()
			inspect entradaUsuario
   				when 0 then
					Io.new_line
					print("Se ha establecido el valor por default.")
					Io.new_line

				else
					set_semilla(entradaUsuario)
			end

			Io.new_line
			print("Ingrese el numero de objetos:")
			entradaUsuario := get_inputUsuario()
			inspect entradaUsuario
   				when 0 then
					Io.new_line
					print("Se ha establecido el valor por default.")
					Io.new_line

				else
					set_numeroObjetos(entradaUsuario)
			end

		end


	get_inputUsuario() : INTEGER
		do
			Io.new_line
			Io.read_integer

			Result := Io.last_integer
		end

end -- Class APPLICATION
